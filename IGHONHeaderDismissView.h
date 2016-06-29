
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGHONHeaderDismissViewDelegate;
@class UIButton;

@interface IGHONHeaderDismissView : UIView {

	id<IGHONHeaderDismissViewDelegate> _delegate;
	UIButton* _dismissButton;

}

@property (nonatomic,__weak,readonly) id<IGHONHeaderDismissViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)setupDismissButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHONHeaderDismissViewDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(UIButton *)dismissButton;
-(void)dismissButtonTapped:(id)arg1 ;
@end

