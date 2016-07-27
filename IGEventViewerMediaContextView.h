
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGUFIButtonBarViewDelegate.h>

@protocol IGEventViewerMediaContextViewDelegate, IGUFIButtonBarViewProtocol;
@class IGStyledString, CALayer, UIView, IGCoreTextView, NSString;

@interface IGEventViewerMediaContextView : UIView <IGCoreTextLinkHandler, IGUFIButtonBarViewDelegate> {

	id<IGEventViewerMediaContextViewDelegate> _delegate;
	IGStyledString* _viewCountString;
	IGStyledString* _captionString;
	IGStyledString* _viewAllCommentsString;
	CALayer* _dimmedLayer;
	UIView* _backgroundView;
	IGCoreTextView* _viewCountTextView;
	IGCoreTextView* _captionTextView;
	IGCoreTextView* _viewAllCommentsTextView;
	UIView*<IGUFIButtonBarViewProtocol> _ufiButtons;
	int* _ufiStyle;

}

@property (nonatomic,readonly) CALayer * dimmedLayer;                                                //@synthesize dimmedLayer=_dimmedLayer - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * viewCountTextView;                                   //@synthesize viewCountTextView=_viewCountTextView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * captionTextView;                                     //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * viewAllCommentsTextView;                             //@synthesize viewAllCommentsTextView=_viewAllCommentsTextView - In the implementation block
@property (nonatomic,readonly) UIView*<IGUFIButtonBarViewProtocol> ufiButtons;                       //@synthesize ufiButtons=_ufiButtons - In the implementation block
@property (nonatomic,readonly) int* ufiStyle;                                                        //@synthesize ufiStyle=_ufiStyle - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaContextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGStyledString * viewCountString;                                       //@synthesize viewCountString=_viewCountString - In the implementation block
@property (nonatomic,retain) IGStyledString * captionString;                                         //@synthesize captionString=_captionString - In the implementation block
@property (nonatomic,retain) IGStyledString * viewAllCommentsString;                                 //@synthesize viewAllCommentsString=_viewAllCommentsString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setupBlurView;
-(void)setupDimmedLayer;
-(void)setupUFIButtons;
-(void)setupTapGesture;
-(void)didReceiveTapGesture:(id)arg1 ;
-(int*)ufiStyle;
-(CALayer *)dimmedLayer;
-(IGCoreTextView *)viewCountTextView;
-(IGCoreTextView *)captionTextView;
-(IGCoreTextView *)viewAllCommentsTextView;
-(UIView*<IGUFIButtonBarViewProtocol>)ufiButtons;
-(void)updateUFIButtonWithFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)UFIButtonBarDidTapOnLike:(id)arg1 ;
-(void)UFIButtonBarDidTapOnComment:(id)arg1 ;
-(void)UFIButtonBarDidTapOnSend:(id)arg1 ;
-(void)UFIButtonBarDidTapOnLikeViewCount:(id)arg1 ;
-(void)UFIButtonBarDidTapOnCommentCount:(id)arg1 ;
-(void)UFIButtonBar:(id)arg1 wantsSizeUpdateAnimated:(char)arg2 ;
-(void)setViewCountString:(IGStyledString *)arg1 ;
-(void)setCaptionString:(IGStyledString *)arg1 ;
-(void)setViewAllCommentsString:(IGStyledString *)arg1 ;
-(void)updatePhotoForBlurView:(id)arg1 ;
-(void)cancelBlurringViewImageLoad;
-(void)disableUFIButtons;
-(IGStyledString *)viewCountString;
-(IGStyledString *)captionString;
-(IGStyledString *)viewAllCommentsString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerMediaContextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerMediaContextViewDelegate>)delegate;
-(UIView *)backgroundView;
@end

