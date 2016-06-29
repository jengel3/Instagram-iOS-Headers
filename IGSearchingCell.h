
#import <Instagram/IGPlainTableViewCell.h>

@class UIView, UIActivityIndicatorView;

@interface IGSearchingCell : IGPlainTableViewCell {

	UIView* _activityView;
	UIActivityIndicatorView* _activity;

}

@property (nonatomic,retain) UIView * activityView;                           //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activity;              //@synthesize activity=_activity - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)activity;
-(void)setActivity:(UIActivityIndicatorView *)arg1 ;
-(void)setSearchQuery:(id)arg1 ;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
@end

