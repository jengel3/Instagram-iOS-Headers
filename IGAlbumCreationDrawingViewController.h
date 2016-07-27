
#import <UIKit/UIViewController.h>
#import <Instagram/IGDrawControllerDelegate.h>
#import <Instagram/IGAlbumDrawingOptionsViewDelegate.h>

@protocol IGAlbumCreationDrawingViewControllerDelegate;
@class IGDrawViewController, UIImageView, IGTapButton, IGDrawBrushTexture, IGAlbumBrushButton, IGAlbumDrawingOptionsView, UIView, NSString;

@interface IGAlbumCreationDrawingViewController : UIViewController <IGDrawControllerDelegate, IGAlbumDrawingOptionsViewDelegate> {

	id<IGAlbumCreationDrawingViewControllerDelegate> _delegate;
	IGDrawViewController* _drawViewController;
	UIImageView* _drawingOverlayImageView;
	IGTapButton* _drawConfirmButton;
	IGTapButton* _drawUndoButton;
	IGDrawBrushTexture* _selectedBrush;
	IGAlbumBrushButton* _markerButton;
	IGDrawBrushTexture* _markerBrush;
	IGAlbumBrushButton* _chiselButton;
	IGDrawBrushTexture* _chiselBrush;
	IGAlbumDrawingOptionsView* _drawingOptionsView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) IGDrawViewController * drawViewController;                                     //@synthesize drawViewController=_drawViewController - In the implementation block
@property (nonatomic,retain) UIImageView * drawingOverlayImageView;                                         //@synthesize drawingOverlayImageView=_drawingOverlayImageView - In the implementation block
@property (nonatomic,retain) IGTapButton * drawConfirmButton;                                               //@synthesize drawConfirmButton=_drawConfirmButton - In the implementation block
@property (nonatomic,retain) IGTapButton * drawUndoButton;                                                  //@synthesize drawUndoButton=_drawUndoButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushTexture * selectedBrush;                                            //@synthesize selectedBrush=_selectedBrush - In the implementation block
@property (nonatomic,retain) IGAlbumBrushButton * markerButton;                                             //@synthesize markerButton=_markerButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushTexture * markerBrush;                                              //@synthesize markerBrush=_markerBrush - In the implementation block
@property (nonatomic,retain) IGAlbumBrushButton * chiselButton;                                             //@synthesize chiselButton=_chiselButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushTexture * chiselBrush;                                              //@synthesize chiselBrush=_chiselBrush - In the implementation block
@property (nonatomic,retain) IGAlbumDrawingOptionsView * drawingOptionsView;                                //@synthesize drawingOptionsView=_drawingOptionsView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                          //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationDrawingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDrawUndoButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawUndoButton;
-(void)undoLastStroke;
-(IGDrawViewController *)drawViewController;
-(void)clearDrawing;
-(void)setDrawConfirmButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawConfirmButton;
-(void)confirmDrawing;
-(void)markerBrushSelected;
-(void)chiselBrushSelected;
-(void)updateSelectedBrush:(id)arg1 ;
-(char)hasDrawing;
-(id)createDrawingImage;
-(void)enableDrawing:(char)arg1 ;
-(void)setDimmingViewHidden:(char)arg1 animated:(char)arg2 ;
-(void)drawControllerDidBeginDrawing:(id)arg1 ;
-(void)drawControllerDidAddStroke:(id)arg1 ;
-(void)drawingOptionsViewWillBeginSelectingBrushWidth:(id)arg1 ;
-(void)drawingOptionsView:(id)arg1 didSelectBrushWidth:(float)arg2 ;
-(void)drawingOptionsView:(id)arg1 didSelectColor:(id)arg2 ;
-(void)cancelDrawing;
-(void)setDrawViewController:(IGDrawViewController *)arg1 ;
-(UIImageView *)drawingOverlayImageView;
-(void)setDrawingOverlayImageView:(UIImageView *)arg1 ;
-(IGDrawBrushTexture *)selectedBrush;
-(void)setSelectedBrush:(IGDrawBrushTexture *)arg1 ;
-(IGAlbumBrushButton *)markerButton;
-(void)setMarkerButton:(IGAlbumBrushButton *)arg1 ;
-(IGDrawBrushTexture *)markerBrush;
-(void)setMarkerBrush:(IGDrawBrushTexture *)arg1 ;
-(IGAlbumBrushButton *)chiselButton;
-(void)setChiselButton:(IGAlbumBrushButton *)arg1 ;
-(IGDrawBrushTexture *)chiselBrush;
-(void)setChiselBrush:(IGDrawBrushTexture *)arg1 ;
-(IGAlbumDrawingOptionsView *)drawingOptionsView;
-(void)setDrawingOptionsView:(IGAlbumDrawingOptionsView *)arg1 ;
-(void)setDelegate:(id<IGAlbumCreationDrawingViewControllerDelegate>)arg1 ;
-(id<IGAlbumCreationDrawingViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
@end

