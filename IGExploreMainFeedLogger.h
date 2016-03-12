

#import <Instagram/Instagram-Structs.h>
@class NSString;

@interface IGExploreMainFeedLogger : NSObject {

	NSString* _module;

}

@property (nonatomic,retain) NSString * module;              //@synthesize module=_module - In the implementation block
-(id)initWithModule:(id)arg1 ;
-(NSString *)module;
-(id)channelType:(id)arg1 ;
-(void)logImpressionForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logImpressionForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForMedia:(id)arg1 position:(NSRange)arg2 ;
-(void)logClickForChannel:(id)arg1 position:(NSRange)arg2 ;
-(void)logRaindropImpressionForMedia:(id)arg1 position:(NSRange)arg2 navState:(id)arg3 ;
-(void)logRaindropImpressionForChannel:(id)arg1 position:(NSRange)arg2 navState:(id)arg3 ;
-(void)logRaindropClickForMedia:(id)arg1 position:(NSRange)arg2 navState:(id)arg3 ;
-(void)logRaindropClickForChannel:(id)arg1 position:(NSRange)arg2 navState:(id)arg3 ;
-(void)setModule:(NSString *)arg1 ;
@end

