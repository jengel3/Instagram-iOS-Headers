
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGEventViewerMediaContextViewDelegate;
@class IGStyledString, CALayer, UIView, IGCoreTextView, NSString;

@interface IGEventViewerMediaContextView : UIView <IGCoreTextLinkHandler> {

	id<IGEventViewerMediaContextViewDelegate> _delegate;
	IGStyledString* _viewCountString;
	IGStyledString* _captionString;
	IGStyledString* _viewAllCommentsString;
	CALayer* _dimmedLayer;
	UIView* _backgroundView;
	IGCoreTextView* _viewCountTextView;
	IGCoreTextView* _captionTextView;
	IGCoreTextView* _viewAllCommentsTextView;

}

@property (nonatomic,readonly) CALayer * dimmedLayer;                                                //@synthesize dimmedLayer=_dimmedLayer - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * viewCountTextView;                                   //@synthesize viewCountTextView=_viewCountTextView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * captionTextView;                                     //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * viewAllCommentsTextView;                             //@synthesize viewAllCommentsTextView=_viewAllCommentsTextView - In the implementation block
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
-(void)setupTapGesture;
-(void)didReceiveTapGesture:(id)arg1 ;
-(CALayer *)dimmedLayer;
-(IGCoreTextView *)viewCountTextView;
-(IGCoreTextView *)captionTextView;
-(IGCoreTextView *)viewAllCommentsTextView;
-(void)setViewCountString:(IGStyledString *)arg1 ;
-(void)setCaptionString:(IGStyledString *)arg1 ;
-(void)setViewAllCommentsString:(IGStyledString *)arg1 ;
-(void)updatePhotoForBlurView:(id)arg1 ;
-(void)cancelBlurringViewImageLoad;
-(IGStyledString *)viewCountString;
-(IGStyledString *)captionString;
-(IGStyledString *)viewAllCommentsString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerMediaContextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerMediaContextViewDelegate>)delegate;
-(UIView *)backgroundView;
@end

