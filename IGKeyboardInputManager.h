
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBKeyboardObserverDelegate.h>

@class NSSet, UIScrollView, UIView, UITextView, FBKeyboardObserver, NSString;

@interface IGKeyboardInputManager : NSObject <FBKeyboardObserverDelegate> {

	char _panInputView;
	NSSet* _additionalViewsToMoveWithKeyboard;
	UIScrollView* _scrollView;
	UIView* _accessoryView;
	UITextView* _textView;
	UIView* _keyboardView;
	FBKeyboardObserver* _keyboardObserver;
	float _bottomInsetY;

}

@property (nonatomic,retain) NSSet * additionalViewsToMoveWithKeyboard;              //@synthesize additionalViewsToMoveWithKeyboard=_additionalViewsToMoveWithKeyboard - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                     //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * accessoryView;                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,__weak,readonly) UITextView * textView;                         //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) char panInputView;                                    //@synthesize panInputView=_panInputView - In the implementation block
@property (nonatomic,retain) UIView * keyboardView;                                  //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,readonly) FBKeyboardObserver * keyboardObserver;                //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (assign,nonatomic) float bottomInsetY;                                     //@synthesize bottomInsetY=_bottomInsetY - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)keyboardHeight;
-(id)initWithScrollView:(id)arg1 textView:(id)arg2 accessoryView:(id)arg3 panInputView:(char)arg4 ;
-(void)layoutAccessoryView;
-(void)setAdditionalViewsToMoveWithKeyboard:(NSSet *)arg1 ;
-(void)updateKeyboard;
-(FBKeyboardObserver *)keyboardObserver;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)updateBottomInsetY:(float)arg1 ;
-(UIView *)keyboardView;
-(void)setBottomInsetY:(float)arg1 ;
-(void)setKeyboardView:(UIView *)arg1 ;
-(float)bottomInsetY;
-(void)sneakinglyEndEditingIfNeeded;
-(void)onScrollViewPan:(id)arg1 ;
-(float)accessoryHeight;
-(float)viewHeight;
-(void)onPan:(id)arg1 suggestedTopY:(float)arg2 shouldCompensateScroll:(char)arg3 ;
-(void)finishShowingThreadkeyboardViewIfNeeded:(char)arg1 ;
-(void)finishHidingThreadkeyboardViewIfNeeded:(char)arg1 ;
-(NSSet *)additionalViewsToMoveWithKeyboard;
-(void)updateInsets:(UIEdgeInsets)arg1 ;
-(void)reallyFinishHidingThreadkeyboardView;
-(void)reallyFinishShowingThreadkeyboardView;
-(char)panInputView;
-(void)onInputPan:(id)arg1 ;
-(float)visibleKeyboardHeightFromFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)containerView;
-(UIScrollView *)scrollView;
-(UIView *)accessoryView;
-(UITextView *)textView;
@end

