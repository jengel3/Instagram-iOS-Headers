

#import <Instagram/Instagram-Structs.h>
@class NSString, NSMutableSet, IGMediaThumbnailLogger, IGExploreInterestSelectionLogger;

@interface IGExploreMainFeedLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;
	IGMediaThumbnailLogger* _mediaLogger;
	IGExploreInterestSelectionLogger* _interestLogger;

}

@property (nonatomic,copy,readonly) NSString * module;                                         //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;                               //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailLogger * mediaLogger;                           //@synthesize mediaLogger=_mediaLogger - In the implementation block
@property (nonatomic,readonly) IGExploreInterestSelectionLogger * interestLogger;              //@synthesize interestLogger=_interestLogger - In the implementation block
-(NSString *)module;
-(id)initWithModule:(id)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(IGMediaThumbnailLogger *)mediaLogger;
-(void)logImpressionForChannel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(IGExploreInterestSelectionLogger *)interestLogger;
-(void)logClickForChannel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logImpressionForItem:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logClickForItem:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logExploreInterestSelectionSeeMoreForModel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logExploreInterestSelectionDoneForModel:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
@end

