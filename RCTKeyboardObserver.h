
#import <Instagram/RCTEventEmitter.h>

@interface RCTKeyboardObserver : RCTEventEmitter
+(id)moduleName;
+(void)load;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(id)supportedEvents;
-(void)startObserving;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(void)stopObserving;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

