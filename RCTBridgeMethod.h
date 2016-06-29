
@class NSString, NSDictionary;


@protocol RCTBridgeMethod <NSObject>
@property (nonatomic,copy,readonly) NSString * JSMethodName; 
@property (nonatomic,copy,readonly) NSDictionary * profileArgs; 
@property (nonatomic,readonly) unsigned functionType; 
@required
-(void)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
-(NSString *)JSMethodName;
-(NSDictionary *)profileArgs;
-(unsigned)functionType;

@end

