

@class NSMutableDictionary, NSDictionary;

@interface FBFunnelPayload : NSObject {

	NSMutableDictionary* _payload;

}

@property (nonatomic,copy,readonly) NSDictionary * payload; 
-(void)addKey:(id)arg1 withNumberValue:(id)arg2 ;
-(void)addKey:(id)arg1 withStringValue:(id)arg2 ;
-(void)addKey:(id)arg1 withBooleanValue:(char)arg2 ;
-(id)init;
-(NSDictionary *)payload;
@end

