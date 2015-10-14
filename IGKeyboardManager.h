/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView;

@interface IGKeyboardManager : NSObject {

	char _keyboardIsVisible;
	float _keyboardHeight;
	float _keyboardAnimationDuration;
	int _keyboardAnimationCurve;

}

@property (assign,nonatomic) float keyboardHeight;                         //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) float keyboardAnimationDuration;              //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
@property (assign,nonatomic) int keyboardAnimationCurve;                   //@synthesize keyboardAnimationCurve=_keyboardAnimationCurve - In the implementation block
@property (nonatomic,readonly) UIView * keyboard; 
@property (nonatomic,readonly) char keyboardIsVisible;                     //@synthesize keyboardIsVisible=_keyboardIsVisible - In the implementation block
+(id)sharedKeyboardManager;
-(float)keyboardHeight;
-(float)keyboardAnimationDuration;
-(int)keyboardAnimationCurve;
-(void)setKeyboardAnimationCurve:(int)arg1 ;
-(void)setKeyboardAnimationDuration:(float)arg1 ;
-(void)warmKeyboard;
-(void)setKeyboardHeight:(float)arg1 ;
-(char)keyboardIsVisible;
-(void)dealloc;
-(id)init;
-(UIView *)keyboard;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

