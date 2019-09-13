
#import <Foundation/Foundation.h>

@interface SubtitleHandler : NSObject <NSXMLParserDelegate> {
    
    NSArray *urls_;
    NSArray *ids_;
    
    NSString * _selectedSubtitleKey;

    int _currentOffsetIntoSubtitle;
}

@property int selectedSubtitleIndex;

- (id)initWithURLS:(NSArray *)urlArray andIds:(NSArray *)idArray;

+ (id) getHandler: (NSDictionary *) attributes;

- (void)setSelectedSubtitleIndex:(NSInteger)tracknum;

- (NSArray *)availableSubtitles;

- (NSArray *)subtitlesForId:(NSString *)subId;

- (NSString *)getSubForTime:(NSTimeInterval)currentTime
                withEndTime:(NSTimeInterval *)endTime
               andNextBegin:(NSTimeInterval *)nextBegin;

- (NSTimeInterval)getTimeFromString:(NSString *)timeStr;

- (NSMutableArray *) parseVtt:(NSString *)input;

@end
