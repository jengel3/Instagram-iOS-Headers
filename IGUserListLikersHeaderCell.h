
#import <Instagram/IGPlainTableViewCell.h>

@class NSString, UILabel, UIView, UIImageView;

@interface IGUserListLikersHeaderCell : IGPlainTableViewCell {

	NSString* _likesString;
	UILabel* _likeCountLabel;
	UIView* _likeTitleView;
	UIImageView* _heartImageView;
	UILabel* _likeTitleLabel;

}

@property (nonatomic,retain) NSString * likesString;                      //@synthesize likesString=_likesString - In the implementation block
@property (nonatomic,readonly) UILabel * likeCountLabel;                  //@synthesize likeCountLabel=_likeCountLabel - In the implementation block
@property (nonatomic,readonly) UIView * likeTitleView;                    //@synthesize likeTitleView=_likeTitleView - In the implementation block
@property (nonatomic,readonly) UIImageView * heartImageView;              //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,readonly) UILabel * likeTitleLabel;                  //@synthesize likeTitleLabel=_likeTitleLabel - In the implementation block
+(float)cellHeight;
-(UIImageView *)heartImageView;
-(UILabel *)likeCountLabel;
-(void)setLikesString:(NSString *)arg1 ;
-(NSString *)likesString;
-(UILabel *)likeTitleLabel;
-(UIView *)likeTitleView;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

