
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEventViewerMediaPauseViewDelegate;
@class IGEventViewerMediaPauseViewButton, CALayer;

@interface IGEventViewerMediaPauseView : UIView {

	id<IGEventViewerMediaPauseViewDelegate> _delegate;
	IGEventViewerMediaPauseViewButton* _shareButton;
	IGEventViewerMediaPauseViewButton* _viewPostButton;
	CALayer* _dimmedLayer;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaPauseViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerMediaPauseViewButton * shareButton;                 //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerMediaPauseViewButton * viewPostButton;              //@synthesize viewPostButton=_viewPostButton - In the implementation block
@property (nonatomic,readonly) CALayer * dimmedLayer;                                                  //@synthesize dimmedLayer=_dimmedLayer - In the implementation block
-(void)didReceiveTapGesture:(id)arg1 ;
-(void)setupDimmedLayer;
-(void)setupDirectShareButton;
-(void)setupViewPostButton;
-(void)setupTapGesture;
-(void)didTapShareButton:(id)arg1 ;
-(void)didTapViewPostButton:(id)arg1 ;
-(IGEventViewerMediaPauseViewButton *)viewPostButton;
-(CALayer *)dimmedLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerMediaPauseViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerMediaPauseViewDelegate>)delegate;
-(IGEventViewerMediaPauseViewButton *)shareButton;
@end

