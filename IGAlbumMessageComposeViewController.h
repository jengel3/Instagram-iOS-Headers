
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/FBKeyboardObserverDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumMessageComposeDelegate;
@class IGFeedItem, FBKeyboardObserver, IGAlbumMessageTextView, UITapGestureRecognizer, UISwipeGestureRecognizer, NSString;

@interface IGAlbumMessageComposeViewController : IGViewController <FBKeyboardObserverDelegate, IGGrowingTextViewDelegate, UIGestureRecognizerDelegate> {

	id<IGAlbumMessageComposeDelegate> _delegate;
	IGFeedItem* _item;
	FBKeyboardObserver* _keyboardObserver;
	IGAlbumMessageTextView* _messageTextView;
	float _textViewBottomOffset;
	UITapGestureRecognizer* _tapGesture;
	UISwipeGestureRecognizer* _swipeDownGesture;

}

@property (nonatomic,readonly) IGFeedItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;                          //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) IGAlbumMessageTextView * messageTextView;                       //@synthesize messageTextView=_messageTextView - In the implementation block
@property (assign,nonatomic) float textViewBottomOffset;                                     //@synthesize textViewBottomOffset=_textViewBottomOffset - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                            //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeDownGesture;                    //@synthesize swipeDownGesture=_swipeDownGesture - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumMessageComposeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithFeedItem:(id)arg1 ;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(FBKeyboardObserver *)keyboardObserver;
-(void)setMessageTextView:(IGAlbumMessageTextView *)arg1 ;
-(IGAlbumMessageTextView *)messageTextView;
-(void)sendButtonTapped;
-(void)handleDismissGesture:(id)arg1 ;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setSwipeDownGesture:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeDownGesture;
-(void)updateTextViewFrame;
-(float)textViewBottomOffset;
-(void)setTextViewBottomOffset:(float)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumMessageComposeDelegate>)arg1 ;
-(id<IGAlbumMessageComposeDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(IGFeedItem *)item;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)dismiss;
@end

