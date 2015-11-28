
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <Instagram/IGSlidingCollectionViewCell.h>

@class IGDate, UILabel, NSString;

@interface IGTimeStampHeaderView : UICollectionReusableView <IGSlidingCollectionViewCell> {

	float _slideAmount;
	IGDate* _timestamp;
	UILabel* _timestampLabel;

}

@property (nonatomic,retain) IGDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;              //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float slideAmount;                     //@synthesize slideAmount=_slideAmount - In the implementation block
@property (nonatomic,readonly) float maxSlideAmount; 
-(UILabel *)timestampLabel;
-(void)setSlideAmount:(float)arg1 ;
-(float)slideAmount;
-(float)maxSlideAmount;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGDate *)timestamp;
-(void)setTimestamp:(IGDate *)arg1 ;
-(void)prepareForReuse;
@end

