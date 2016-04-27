

#import <Instagram/Instagram-Structs.h>
@class NSString, NSMutableSet;

@interface IGExploreMainFeedLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,copy,readonly) NSString * module;                        //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
-(id)initWithModule:(id)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(void)logImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logMarauderClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(NSString *)module;
-(id)stringForPosition:(NSRange)arg1 ;
-(void)logImpressionForItem:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForItem:(id)arg1 position:(NSRange)arg2 ;
@end

