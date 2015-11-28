
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGSegmentedControlDelegate;
@class NSArray, UIImageView, UIPanGestureRecognizer;

@interface IGSegmentedControl : UIView {

	NSArray* _buttons;
	int _selectedIndex;
	id<IGSegmentedControlDelegate> _delegate;
	UIImageView* _bgView;
	UIImageView* _selectionView;
	UIPanGestureRecognizer* _panRecognizer;
	int _style;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSArray * buttons;                                           //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                         //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) int selectedIndex;                                           //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<IGSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * bgView;                                        //@synthesize bgView=_bgView - In the implementation block
@property (nonatomic,retain) UIImageView * selectionView;                                 //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                      //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (assign,nonatomic) int style;                                                   //@synthesize style=_style - In the implementation block
-(UIImageView *)bgView;
-(void)panGesture:(id)arg1 ;
-(void)onSegmentTapped:(id)arg1 ;
-(void)moveSelectionViewAnimated:(char)arg1 ;
-(void)setBgView:(UIImageView *)arg1 ;
-(void)setSelectedIndex:(int)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSegmentedControlDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGSegmentedControlDelegate>)delegate;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setTitles:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(UIImageView *)selectionView;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(void)setImages:(id)arg1 ;
-(NSArray *)buttons;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

