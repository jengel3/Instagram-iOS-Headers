
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol IGMarqueeAttributionViewDelegate;
@class UILabel;

@interface IGMarqueeAttributionView : UICollectionReusableView {

	id<IGMarqueeAttributionViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _usernameLabel;

}

@property (nonatomic,__weak,readonly) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * usernameLabel;                                  //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGMarqueeAttributionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)footerIdentifier;
+(float)heightForFooter;
-(UILabel *)usernameLabel;
-(void)setupAndConfigureViews;
-(void)didReceiveTapFromGestureRecognizer:(id)arg1 ;
-(void)configureWithUsername:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMarqueeAttributionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGMarqueeAttributionViewDelegate>)delegate;
-(UILabel *)titleLabel;
@end

