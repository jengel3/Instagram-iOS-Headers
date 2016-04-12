
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTKeyboardObserver : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)dealloc;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

