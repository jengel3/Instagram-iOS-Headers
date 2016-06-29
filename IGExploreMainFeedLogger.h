

#import <Instagram/Instagram-Structs.h>
@class NSString, NSMutableSet, IGMediaThumbnailLogger;

@interface IGExploreMainFeedLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;
	IGMediaThumbnailLogger* _mediaLogger;

}

@property (nonatomic,copy,readonly) NSString * module;                            //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;                  //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailLogger * mediaLogger;              //@synthesize mediaLogger=_mediaLogger - In the implementation block
-(IGMediaThumbnailLogger *)mediaLogger;
-(void)logImpressionForChannel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logClickForChannel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logImpressionForItem:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logClickForItem:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(NSString *)module;
-(id)initWithModule:(id)arg1 ;
-(NSMutableSet *)loggedImpressions;
@end

