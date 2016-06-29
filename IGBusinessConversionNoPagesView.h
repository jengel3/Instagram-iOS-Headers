
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGBusinessConversionNoPagesViewDelegate;
@class UILabel, IGButton;

@interface IGBusinessConversionNoPagesView : UIView {

	id<IGBusinessConversionNoPagesViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGButton* _createPageButton;
	UILabel* _disclaimerLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGButton * createPageButton;                                              //@synthesize createPageButton=_createPageButton - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                                                //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionNoPagesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)disclaimerLabel;
-(id)newSecondaryLabel;
-(void)didTapCreatePageButton;
-(IGButton *)createPageButton;
-(void)setCreatePageButton:(IGButton *)arg1 ;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionNoPagesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGBusinessConversionNoPagesViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

