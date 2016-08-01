
#import <UIKit/UIViewController.h>
#import <Instagram/IGDrawControllerDelegate.h>
#import <Instagram/IGAlbumDrawingOptionsViewDelegate.h>

@protocol IGAlbumCreationDrawingViewControllerDelegate;
@class IGPassthroughView, IGAlbumComposerWaterfallLoggingContext, IGDrawViewController, UIImageView, IGTapButton, IGDrawBrushMarker, IGDrawBrushPen, IGDrawBrushNeon, IGAlbumDrawingOptionsView, NSString;

@interface IGAlbumCreationDrawingViewController : UIViewController <IGDrawControllerDelegate, IGAlbumDrawingOptionsViewDelegate> {

	char _viewIsShowing;
	id<IGAlbumCreationDrawingViewControllerDelegate> _delegate;
	IGPassthroughView* _chromeContainerView;
	IGAlbumComposerWaterfallLoggingContext* _loggingContext;
	IGDrawViewController* _drawViewController;
	UIImageView* _drawingOverlayImageView;
	IGTapButton* _drawConfirmButton;
	IGTapButton* _drawUndoButton;
	IGTapButton* _selectedBrushButton;
	int _selectedDrawMode;
	IGTapButton* _markerButton;
	IGDrawBrushMarker* _markerBrush;
	IGTapButton* _penButton;
	IGDrawBrushPen* _penBrush;
	IGTapButton* _neonButton;
	IGDrawBrushNeon* _neonBrush;
	IGAlbumDrawingOptionsView* _drawingOptionsView;

}

@property (nonatomic,retain) IGAlbumComposerWaterfallLoggingContext * loggingContext;                       //@synthesize loggingContext=_loggingContext - In the implementation block
@property (assign,nonatomic) char viewIsShowing;                                                            //@synthesize viewIsShowing=_viewIsShowing - In the implementation block
@property (nonatomic,retain) IGDrawViewController * drawViewController;                                     //@synthesize drawViewController=_drawViewController - In the implementation block
@property (nonatomic,retain) UIImageView * drawingOverlayImageView;                                         //@synthesize drawingOverlayImageView=_drawingOverlayImageView - In the implementation block
@property (nonatomic,retain) IGTapButton * drawConfirmButton;                                               //@synthesize drawConfirmButton=_drawConfirmButton - In the implementation block
@property (nonatomic,retain) IGTapButton * drawUndoButton;                                                  //@synthesize drawUndoButton=_drawUndoButton - In the implementation block
@property (nonatomic,retain) IGTapButton * selectedBrushButton;                                             //@synthesize selectedBrushButton=_selectedBrushButton - In the implementation block
@property (assign,nonatomic) int selectedDrawMode;                                                          //@synthesize selectedDrawMode=_selectedDrawMode - In the implementation block
@property (nonatomic,retain) IGTapButton * markerButton;                                                    //@synthesize markerButton=_markerButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushMarker * markerBrush;                                               //@synthesize markerBrush=_markerBrush - In the implementation block
@property (nonatomic,retain) IGTapButton * penButton;                                                       //@synthesize penButton=_penButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushPen * penBrush;                                                     //@synthesize penBrush=_penBrush - In the implementation block
@property (nonatomic,retain) IGTapButton * neonButton;                                                      //@synthesize neonButton=_neonButton - In the implementation block
@property (nonatomic,retain) IGDrawBrushNeon * neonBrush;                                                   //@synthesize neonBrush=_neonBrush - In the implementation block
@property (nonatomic,retain) IGAlbumDrawingOptionsView * drawingOptionsView;                                //@synthesize drawingOptionsView=_drawingOptionsView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationDrawingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGPassthroughView * chromeContainerView;                                     //@synthesize chromeContainerView=_chromeContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGPassthroughView *)chromeContainerView;
-(void)setDrawUndoButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawUndoButton;
-(void)undoLastStroke;
-(void)clearDrawing;
-(void)setDrawConfirmButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawConfirmButton;
-(void)confirmDrawing;
-(void)penBrushSelected;
-(void)markerBrushSelected;
-(void)neonBrushSelected;
-(id)drawBrushForDrawMode:(int)arg1 ;
-(id)selectedBrush;
-(char)viewIsShowing;
-(void)updateSelectedBrushDrawMode:(int)arg1 ;
-(void)updateSelectedBrushButton:(id)arg1 ;
-(id)createDrawingImage;
-(void)enableDrawing:(char)arg1 ;
-(void)setViewIsShowing:(char)arg1 ;
-(IGDrawViewController *)drawViewController;
-(UIImageView *)drawingOverlayImageView;
-(void)drawControllerDidBeginDrawing:(id)arg1 ;
-(void)drawControllerDidAddStroke:(id)arg1 ;
-(void)drawingOptionsViewWillBeginSelectingBrushWidth:(id)arg1 ;
-(void)drawingOptionsView:(id)arg1 didSelectBrushWidth:(float)arg2 ;
-(void)drawingOptionsView:(id)arg1 didSelectColor:(id)arg2 ;
-(void)cancelDrawing;
-(void)setDrawViewController:(IGDrawViewController *)arg1 ;
-(void)setDrawingOverlayImageView:(UIImageView *)arg1 ;
-(IGTapButton *)selectedBrushButton;
-(void)setSelectedBrushButton:(IGTapButton *)arg1 ;
-(int)selectedDrawMode;
-(void)setSelectedDrawMode:(int)arg1 ;
-(IGTapButton *)markerButton;
-(void)setMarkerButton:(IGTapButton *)arg1 ;
-(IGDrawBrushMarker *)markerBrush;
-(void)setMarkerBrush:(IGDrawBrushMarker *)arg1 ;
-(IGTapButton *)penButton;
-(void)setPenButton:(IGTapButton *)arg1 ;
-(IGDrawBrushPen *)penBrush;
-(void)setPenBrush:(IGDrawBrushPen *)arg1 ;
-(IGTapButton *)neonButton;
-(void)setNeonButton:(IGTapButton *)arg1 ;
-(IGDrawBrushNeon *)neonBrush;
-(void)setNeonBrush:(IGDrawBrushNeon *)arg1 ;
-(IGAlbumDrawingOptionsView *)drawingOptionsView;
-(void)setDrawingOptionsView:(IGAlbumDrawingOptionsView *)arg1 ;
-(void)setLoggingContext:(IGAlbumComposerWaterfallLoggingContext *)arg1 ;
-(IGAlbumComposerWaterfallLoggingContext *)loggingContext;
-(char)hasDrawing;
-(id)initWithLoggingContext:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumCreationDrawingViewControllerDelegate>)arg1 ;
-(id<IGAlbumCreationDrawingViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
@end

