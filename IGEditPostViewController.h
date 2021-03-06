
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGEditPostTextViewControllerDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <Instagram/IGUserInTaggingViewControllerDelegate.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>

@protocol IGEditPostViewControllerDelegate;
@class UIView, IGFeedItem, IGAutocompleteController, IGFeedMediaView, UITapGestureRecognizer, IGFeedItemHeader, IGEditPostTextViewController, IGTagPeopleView, UIScrollView, UIBarButtonItem, IGEditedPost, IGNavigationBar, NSString;

@interface IGEditPostViewController : IGViewController <IGEditPostTextViewControllerDelegate, IGFeedItemHeaderDelegate, IGAutocompleteControllerDelegate, IGActionSheetDelegate, IGLocationPickerDelegate, IGUserInTaggingViewControllerDelegate, IGFeedItemVideoViewDelegate, IGFeedPhotoViewDelegate> {

	char _loading;
	char _autocompleteShown;
	char _appearing;
	char _disappearing;
	char _committingText;
	UIView* _backgroundView;
	UIView* _backgroundTabBarView;
	IGFeedItem* _feedItem;
	id<IGEditPostViewControllerDelegate> _delegate;
	IGAutocompleteController* _autocompleteController;
	UIView* _autocompleteDivider;
	IGFeedMediaView* _mediaView;
	UITapGestureRecognizer* _mediaViewTapRecognizer;
	IGFeedItemHeader* _headerView;
	IGEditPostTextViewController* _textViewController;
	IGTagPeopleView* _tagPeopleView;
	UIScrollView* _scrollView;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	IGEditedPost* _editedPost;
	UIView* _aboveHeaderView;
	int _keyboardAnimationCurve;
	double _keyboardAnimationDuration;
	CGRect _headerFrame;
	CGRect _mediaFrame;
	CGRect _backgroundViewFrame;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) IGAutocompleteController * autocompleteController;                 //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * autocompleteDivider;                                      //@synthesize autocompleteDivider=_autocompleteDivider - In the implementation block
@property (nonatomic,retain) IGFeedMediaView * mediaView;                                       //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * mediaViewTapRecognizer;                   //@synthesize mediaViewTapRecognizer=_mediaViewTapRecognizer - In the implementation block
@property (nonatomic,retain) IGFeedItemHeader * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGEditPostTextViewController * textViewController;                 //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) IGTagPeopleView * tagPeopleView;                                   //@synthesize tagPeopleView=_tagPeopleView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) char autocompleteShown;                                            //@synthesize autocompleteShown=_autocompleteShown - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) IGEditedPost * editedPost;                                         //@synthesize editedPost=_editedPost - In the implementation block
@property (nonatomic,retain) UIView * aboveHeaderView;                                          //@synthesize aboveHeaderView=_aboveHeaderView - In the implementation block
@property (assign,getter=isAppearing,nonatomic) char appearing;                                 //@synthesize appearing=_appearing - In the implementation block
@property (assign,getter=isDisappearing,nonatomic) char disappearing;                           //@synthesize disappearing=_disappearing - In the implementation block
@property (assign,nonatomic) int keyboardAnimationCurve;                                        //@synthesize keyboardAnimationCurve=_keyboardAnimationCurve - In the implementation block
@property (assign,nonatomic) double keyboardAnimationDuration;                                  //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
@property (getter=isKeyboardShowing,nonatomic,readonly) char keyboardShowing; 
@property (assign,getter=isCommittingText,nonatomic) char committingText;                       //@synthesize committingText=_committingText - In the implementation block
@property (nonatomic,readonly) IGNavigationBar * navigationBar; 
@property (nonatomic,readonly) float navBarHeight; 
@property (getter=isPhoto,nonatomic,readonly) char photo; 
@property (getter=isVideo,nonatomic,readonly) char video; 
@property (nonatomic,retain) UIView * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTabBarView;                                     //@synthesize backgroundTabBarView=_backgroundTabBarView - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect mediaFrame;                                                 //@synthesize mediaFrame=_mediaFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundViewFrame;                                        //@synthesize backgroundViewFrame=_backgroundViewFrame - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGEditPostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                     //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(IGAutocompleteController *)autocompleteController;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnMoreButton:(id)arg1 ;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(void)textViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2 ;
-(void)textViewController:(id)arg1 textViewDidChange:(id)arg2 ;
-(void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2 ;
-(char)textViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(IGEditPostTextViewController *)textViewController;
-(IGTagPeopleView *)tagPeopleView;
-(UIView *)backgroundTabBarView;
-(UIView *)aboveHeaderView;
-(void)configureHeaderWithEditedPost;
-(UIView *)autocompleteDivider;
-(int)tagCount;
-(CGRect)backgroundViewFrame;
-(CGRect)mediaFrame;
-(CGSize)contentSizeWithCaptionHeight:(float)arg1 ;
-(char)isCommittingText;
-(void)setKeyboardAnimationCurve:(int)arg1 ;
-(void)setKeyboardAnimationDuration:(double)arg1 ;
-(UITapGestureRecognizer *)mediaViewTapRecognizer;
-(void)adjustAutocompleteFrame;
-(float)contentOffsetYTouchingCaption;
-(void)scrollToCaretAnimated:(char)arg1 ;
-(void)setDisappearing:(char)arg1 ;
-(void)configureHeaderWithEditedPostInEditingMode:(char)arg1 ;
-(char)isKeyboardShowing;
-(void)disappearWithCurve:(int)arg1 duration:(double)arg2 ;
-(char)isDisappearing;
-(void)setCommittingText:(char)arg1 ;
-(IGEditedPost *)editedPost;
-(void)mediaViewTapped:(id)arg1 ;
-(void)scrollViewTapped:(id)arg1 ;
-(void)tagPeopleTapped:(id)arg1 ;
-(void)onDoneEditing;
-(void)onCancelEditing;
-(void)launchLocationPicker;
-(void)dismissPresentedController:(id)arg1 finished:(char)arg2 ;
-(void)launchUserTaggingView;
-(char)autocompleteShown;
-(void)setAutocompleteShown:(char)arg1 ;
-(float)contentOffsetYAtCaret;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)userInTaggingViewController:(id)arg1 didFinish:(char)arg2 ;
-(void)setAlphaOnNavBarItems:(float)arg1 ;
-(void)setBackgroundTabBarView:(UIView *)arg1 ;
-(void)setMediaFrame:(CGRect)arg1 ;
-(void)setBackgroundViewFrame:(CGRect)arg1 ;
-(void)setAutocompleteDivider:(UIView *)arg1 ;
-(void)setMediaView:(IGFeedMediaView *)arg1 ;
-(void)setMediaViewTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTextViewController:(IGEditPostTextViewController *)arg1 ;
-(void)setTagPeopleView:(IGTagPeopleView *)arg1 ;
-(void)setEditedPost:(IGEditedPost *)arg1 ;
-(void)setAboveHeaderView:(UIView *)arg1 ;
-(float)navBarHeight;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(double)keyboardAnimationDuration;
-(int)keyboardAnimationCurve;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(void)setAppearing:(char)arg1 ;
-(char)isAppearing;
-(char)isPhoto;
-(void)setDelegate:(id<IGEditPostViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGEditPostViewControllerDelegate>)delegate;
-(IGNavigationBar *)navigationBar;
-(UIEdgeInsets)contentInsets;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGFeedItemHeader *)headerView;
-(void)setHeaderView:(IGFeedItemHeader *)arg1 ;
-(void)dismiss;
-(char)isLoading;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(char)isVideo;
-(CGRect)headerFrame;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)setLoading:(char)arg1 ;
-(IGFeedMediaView *)mediaView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

