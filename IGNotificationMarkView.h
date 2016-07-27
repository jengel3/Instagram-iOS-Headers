
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGNotificationMarkView : UIView {

	UIImageView* _markView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIImageView * markView;              //@synthesize markView=_markView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                 //@synthesize textLabel=_textLabel - In the implementation block
+(id)createMarkView;
+(id)createTextLabelWithBadgeCount:(int)arg1 ;
-(UIImageView *)markView;
-(id)initWithFrame:(CGRect)arg1 badgeCount:(int)arg2 ;
-(void)updateWithBadgeCount:(int)arg1 ;
-(void)setMarkView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

