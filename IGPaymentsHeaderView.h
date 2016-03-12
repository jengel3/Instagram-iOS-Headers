
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGPaymentsHeaderViewDelegate;
@class UIButton, UILabel, NSString;

@interface IGPaymentsHeaderView : UIView {

	id<IGPaymentsHeaderViewDelegate> _delegate;
	UIButton* _closeButton;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic,__weak) id<IGPaymentsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setUpViewHierarchy;
-(void)onCloseButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPaymentsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGPaymentsHeaderViewDelegate>)delegate;
-(NSString *)title;
-(UILabel *)titleLabel;
-(UIButton *)closeButton;
@end

