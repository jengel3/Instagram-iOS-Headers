
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGHONSelectionViewDelegate;
@class UIButton;

@interface IGHONSelectionView : UIView {

	id<IGHONSelectionViewDelegate> _delegate;
	UIButton* _rightButton;
	UIButton* _leftButton;
	UIButton* _notSureButton;
	int _viewedState;

}

@property (nonatomic,__weak,readonly) id<IGHONSelectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;                                      //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                       //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * notSureButton;                                    //@synthesize notSureButton=_notSureButton - In the implementation block
@property (assign,nonatomic) int viewedState;                                               //@synthesize viewedState=_viewedState - In the implementation block
-(void)setupSubviewsForViewedState:(int)arg1 ;
-(id)selectionButtonWithTitle:(id)arg1 viewedState:(int)arg2 ;
-(id)textOnlyButtonWithTitle:(id)arg1 viewedState:(int)arg2 ;
-(void)notSureButtonTapped:(id)arg1 ;
-(void)selectionButtonTapped:(id)arg1 ;
-(int)viewedState;
-(UIButton *)notSureButton;
-(void)setViewedState:(int)arg1 ;
-(void)updateToViewedState:(int)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHONSelectionViewDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

