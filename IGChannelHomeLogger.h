

#import <Instagram/Instagram-Structs.h>
@class NSString, NSMutableSet;

@interface IGChannelHomeLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,readonly) NSString * module;                             //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
-(NSString *)module;
-(void)logImpressionForItem:(id)arg1 type:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)logClickForItem:(id)arg1 type:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)logImpressionForChannel:(id)arg1 type:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)logTitleImpressionForTitle:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 ;
-(void)logClickForChannel:(id)arg1 type:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)addChannelInfoForEvent:(id)arg1 channel:(id)arg2 ;
-(NSMutableSet *)loggedImpressions;
-(id)initWithModule:(id)arg1 ;
@end

