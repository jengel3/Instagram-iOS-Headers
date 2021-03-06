
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, NSString;

@interface IGSelectAlbumCell : UITableViewCell {

	int _requestID;
	UIImage* _thumbnail;
	int _appearanceType;
	UILabel* _countLabel;

}

@property (nonatomic,readonly) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) int requestID;                       //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                 //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int assetCount; 
@property (assign,nonatomic) int appearanceType;                  //@synthesize appearanceType=_appearanceType - In the implementation block
-(UILabel *)countLabel;
-(void)updateTextLabelAppearance;
-(int)appearanceType;
-(int)assetCount;
-(void)setAppearanceType:(int)arg1 ;
-(void)setAssetCount:(int)arg1 ;
-(int)requestID;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIEdgeInsets)layoutMargins;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setRequestID:(int)arg1 ;
@end

