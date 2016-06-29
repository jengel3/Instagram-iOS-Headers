

@interface RCTKeyCommands : NSObject
+(id)sharedInstance;
-(void)registerKeyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterKeyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 ;
-(char)isKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(int)arg2 ;
-(void)registerDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(int)arg2 ;
-(char)isDoublePressKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(int)arg2 ;
@end

