
#import <Instagram/IGTableViewCell.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface IGAdManagerButtonCell : IGTableViewCell {

	char _isShowingLoading;
	NSString* _title;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char isShowingLoading;                                          //@synthesize isShowingLoading=_isShowingLoading - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)setIsShowingLoading:(char)arg1 ;
-(char)isShowingLoading;
-(void)showLoadingFeedbackWithString:(id)arg1 ;
-(void)hideLoadingFeedback;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setUp;
@end

