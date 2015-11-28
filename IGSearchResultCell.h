
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>

@protocol IGRaindropAnalyticsDelegate;
@class UIView, CALayer;

@interface IGSearchResultCell : IGPlainTableViewCell {

	char _showFollowButton;
	UIView* _iconView;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	CALayer* _separatorLayer;

}

@property (nonatomic,retain) UIView * iconView;                                                     //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,readonly) CALayer * separatorLayer;                                            //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,readonly) char showFollowButton;                                               //@synthesize showFollowButton=_showFollowButton - In the implementation block
+(CGRect)iconViewFrame;
+(id)formatedPostCount:(unsigned)arg1 ;
+(id)backgroundColor;
+(float)height;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)setHashtag:(id)arg1 ;
-(CALayer *)separatorLayer;
-(float)labelMinXForIconFrame:(CGRect)arg1 ;
-(void)layoutLabels:(float)arg1 bounds:(CGRect)arg2 ;
-(char)showFollowButton;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIcon:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setPlace:(id)arg1 ;
-(void)setSearchQuery:(id)arg1 ;
@end

