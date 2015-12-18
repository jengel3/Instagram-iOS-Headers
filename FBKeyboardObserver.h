

@protocol FBKeyboardObserverDelegate;
@class UIView;

@interface FBKeyboardObserver : NSObject {

	BOOL _observingKeyboardNotifications;
	BOOL _delegateWillShow;
	BOOL _delegateDidShow;
	BOOL _delegateWillHide;
	BOOL _delegateDidHide;
	BOOL _delegateWillChangeFrame;
	BOOL _delegateDidChangeFrame;
	char _keyboardAppearing;
	char _keyboardDisappearing;
	char _keyboardAnimating;
	char _keyboardVisible;
	id<FBKeyboardObserverDelegate> _delegate;
	UIView* _owner;

}

@property (assign,nonatomic,__weak) id<FBKeyboardObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) char keyboardAppearing;                                    //@synthesize keyboardAppearing=_keyboardAppearing - In the implementation block
@property (nonatomic,readonly) char keyboardDisappearing;                                 //@synthesize keyboardDisappearing=_keyboardDisappearing - In the implementation block
@property (nonatomic,readonly) char keyboardAnimating;                                    //@synthesize keyboardAnimating=_keyboardAnimating - In the implementation block
@property (nonatomic,readonly) char keyboardVisible;                                      //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
-(void)stopObservingKeyboardNotifications;
-(void)startObservingKeyboardNotifications;
-(void)_keyboardFrameWillChange:(id)arg1 ;
-(void)_keyboardFrameDidChange:(id)arg1 ;
-(void)_resetKeyboardState;
-(char)keyboardAppearing;
-(char)keyboardDisappearing;
-(char)keyboardAnimating;
-(void)setDelegate:(id<FBKeyboardObserverDelegate>)arg1 ;
-(void)dealloc;
-(id<FBKeyboardObserverDelegate>)delegate;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(char)keyboardVisible;
-(void)setOwner:(UIView *)arg1 ;
-(UIView *)owner;
@end

