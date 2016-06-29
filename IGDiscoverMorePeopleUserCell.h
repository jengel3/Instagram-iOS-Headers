
#import <Instagram/IGUserCell.h>

@class UIImageView, UILabel;

@interface IGDiscoverMorePeopleUserCell : IGUserCell {

	int _sourceType;
	UIImageView* _sourceTypeImageView;
	UILabel* _userDefailtInfoLabel;

}

@property (nonatomic,retain) UIImageView * sourceTypeImageView;              //@synthesize sourceTypeImageView=_sourceTypeImageView - In the implementation block
@property (nonatomic,retain) UILabel * userDefailtInfoLabel;                 //@synthesize userDefailtInfoLabel=_userDefailtInfoLabel - In the implementation block
@property (assign,nonatomic) int sourceType;                                 //@synthesize sourceType=_sourceType - In the implementation block
+(float)defaultCellHeight;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)setSourceTypeImageView:(UIImageView *)arg1 ;
-(UIImageView *)sourceTypeImageView;
-(void)configureCellWithUserInfo:(id)arg1 ;
-(UILabel *)userDefailtInfoLabel;
-(void)setUserDefailtInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
@end

