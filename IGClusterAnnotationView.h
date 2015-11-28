
#import <MapKit/MKAnnotationView.h>

@protocol IGClusterAnnotationViewDelegate;
@class UILabel, UIImageView, IGClusterTileView, UIView, NSMutableArray, UIPinchGestureRecognizer, UIButton, IGButton, UITapGestureRecognizer, IGClusterAnnotationViewLayout;

@interface IGClusterAnnotationView : MKAnnotationView {

	UILabel* _counterLabel;
	UIImageView* _counterBubble;
	IGClusterTileView* _leftTile;
	IGClusterTileView* _rightTile;
	IGClusterTileView* _currentFullScreenTile;
	UIView* _blackOverlay;
	NSMutableArray* _tiles;
	UIPinchGestureRecognizer* _pinchRecognizer;
	UIButton* _infoButton;
	UIButton* _backgroundButton;
	IGButton* _showMoreButton;
	float _currentPinchScale;
	float _lastPinchScale;
	UIView* _viewToBringToFront;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	char _isPinchingIn;
	IGClusterTileView* _mainTile;
	id<IGClusterAnnotationViewDelegate> _delegate;
	IGClusterTileView* _touchedTile;
	IGClusterAnnotationViewLayout* _layout;

}

@property (nonatomic,retain) IGClusterTileView * mainTile;                                     //@synthesize mainTile=_mainTile - In the implementation block
@property (assign,nonatomic,__weak) id<IGClusterAnnotationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGClusterTileView * touchedTile;                                  //@synthesize touchedTile=_touchedTile - In the implementation block
@property (nonatomic,readonly) char isPinchingIn;                                              //@synthesize isPinchingIn=_isPinchingIn - In the implementation block
@property (nonatomic,readonly) IGClusterAnnotationViewLayout * layout;                         //@synthesize layout=_layout - In the implementation block
-(void)setupMainTile;
-(id)clusterAnnotation;
-(void)setTouchedTile:(IGClusterTileView *)arg1 ;
-(void)onFinishExplosion;
-(void)setGestureRecognizersForTile:(id)arg1 ;
-(void)removeCurrentGestureRecognizers;
-(void)didCloseFullScreen;
-(void)didOpenFullScreen;
-(void)expandOrCollapseTile:(int)arg1 isRestoring:(char)arg2 animated:(char)arg3 afterPinch:(char)arg4 ;
-(void)collapseCurrentTile:(char)arg1 ;
-(char)isInFullScreen;
-(void)restoreCurrentTile;
-(void)expandTouchedTile:(char)arg1 ;
-(void)didFinishImplosionAnimation;
-(void)didFinishRestoreAnimation;
-(void)showMoreButtonTapped;
-(IGClusterTileView *)mainTile;
-(id)rightTile;
-(void)reloadTiles;
-(void)didFinishExplosionAnimation;
-(void)backgroundTapped;
-(void)tileTapped:(id)arg1 ;
-(void)infoButtonTapped;
-(id)leftTile;
-(void)setTouchedTileWithIndex:(int)arg1 ;
-(void)collapseCurrentClusterOrImplode;
-(void)implode:(char)arg1 afterPinch:(char)arg2 ;
-(void)restoreAfterPinch;
-(void)explode:(char)arg1 ;
-(void)flashHighlightOnMainTile:(char)arg1 ;
-(void)showSpinnerOnMainTile;
-(void)hideSpinnerOnMainTile;
-(void)setMainTile:(IGClusterTileView *)arg1 ;
-(IGClusterTileView *)touchedTile;
-(char)isPinchingIn;
-(void)handleDoubleTap:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<IGClusterAnnotationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGClusterAnnotationViewDelegate>)delegate;
-(void)handlePinch:(id)arg1 ;
-(IGClusterAnnotationViewLayout *)layout;
-(void)handleSingleTap:(id)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(id)infoButton;
-(void)updateUI;
-(id)cluster;
@end

