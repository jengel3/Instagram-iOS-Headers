
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UIImageView, UILabel, NSString;

@interface IGAlbumCollaboratorCell : UICollectionViewCell {

	char _isPending;
	char _isAddCollaboratorCell;
	IGProfilePictureImageView* _profileImageView;
	UIImageView* _plusImageView;
	UILabel* _primaryTextLabel;
	UILabel* _secondaryTextLabel;

}

@property (nonatomic,retain) UIImageView * plusImageView;                                 //@synthesize plusImageView=_plusImageView - In the implementation block
@property (nonatomic,retain) UILabel * primaryTextLabel;                                  //@synthesize primaryTextLabel=_primaryTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryTextLabel;                                //@synthesize secondaryTextLabel=_secondaryTextLabel - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (assign,nonatomic) char isPending;                                              //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic) char isAddCollaboratorCell;                                  //@synthesize isAddCollaboratorCell=_isAddCollaboratorCell - In the implementation block
-(void)setIsAddCollaboratorCell:(char)arg1 ;
-(char)isAddCollaboratorCell;
-(UIImageView *)plusImageView;
-(void)setPlusImageView:(UIImageView *)arg1 ;
-(UILabel *)primaryTextLabel;
-(void)setPrimaryTextLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryTextLabel;
-(void)setSecondaryTextLabel:(UILabel *)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(void)setIsPending:(char)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)primaryText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(char)isPending;
-(NSString *)secondaryText;
@end

