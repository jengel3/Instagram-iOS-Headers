
#import <Instagram/IGPlainTableViewCell.h>

@class UILabel, UIView, UIImageView;

@interface IGUserListLikersHeaderCell : IGPlainTableViewCell {

	UILabel* _likeCountLabel;
	UIView* _likeTitleView;
	UIImageView* _heartImageView;
	UILabel* _likeTitleLabel;

}

@property (nonatomic,readonly) UILabel * likeCountLabel;                  //@synthesize likeCountLabel=_likeCountLabel - In the implementation block
@property (nonatomic,readonly) UIView * likeTitleView;                    //@synthesize likeTitleView=_likeTitleView - In the implementation block
@property (nonatomic,readonly) UIImageView * heartImageView;              //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,readonly) UILabel * likeTitleLabel;                  //@synthesize likeTitleLabel=_likeTitleLabel - In the implementation block
+(float)cellHeight;
-(UIImageView *)heartImageView;
-(UILabel *)likeCountLabel;
-(void)setLikesString:(id)arg1 ;
-(UILabel *)likeTitleLabel;
-(UIView *)likeTitleView;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

