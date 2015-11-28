
#import <UIKit/UITableViewCell.h>

@class IGAssetGroup, UIView;

@interface IGAssetGroupCell : UITableViewCell {

	IGAssetGroup* _assetGroup;
	int _assetType;
	UIView* _chevronView;
	UIView* _separatorView;

}

@property (nonatomic,retain) IGAssetGroup * assetGroup;              //@synthesize assetGroup=_assetGroup - In the implementation block
@property (assign,nonatomic) int assetType;                          //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) UIView * chevronView;                   //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
-(void)setAssetGroup:(id)arg1 assetType:(int)arg2 ;
-(IGAssetGroup *)assetGroup;
-(void)setAssetGroup:(IGAssetGroup *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
-(int)assetType;
-(void)setAssetType:(int)arg1 ;
@end

