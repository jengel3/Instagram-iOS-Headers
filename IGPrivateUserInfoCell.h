
#import <Instagram/IGPlainTableViewCell.h>

@class UIView;

@interface IGPrivateUserInfoCell : IGPlainTableViewCell {

	UIView* _paddedBoxView;

}

@property (nonatomic,retain) UIView * paddedBoxView;              //@synthesize paddedBoxView=_paddedBoxView - In the implementation block
+(float)height;
-(UIView *)paddedBoxView;
-(void)setPaddedBoxView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

