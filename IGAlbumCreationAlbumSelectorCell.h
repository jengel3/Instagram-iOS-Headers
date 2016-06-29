
#import <UIKit/UITableViewCell.h>

@protocol IGAlbumCreationAlbumSelectorCellDelegate;
@class IGTapButton;

@interface IGAlbumCreationAlbumSelectorCell : UITableViewCell {

	char _showInfoButton;
	id<IGAlbumCreationAlbumSelectorCellDelegate> _delegate;
	IGTapButton* _infoButton;

}

@property (nonatomic,retain) IGTapButton * infoButton;                                                  //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationAlbumSelectorCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showInfoButton;                                                       //@synthesize showInfoButton=_showInfoButton - In the implementation block
-(void)infoButtonTapped;
-(void)setDelegate:(id<IGAlbumCreationAlbumSelectorCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGAlbumCreationAlbumSelectorCellDelegate>)delegate;
-(void)prepareForReuse;
-(IGTapButton *)infoButton;
-(void)setInfoButton:(IGTapButton *)arg1 ;
-(char)showInfoButton;
-(void)setShowInfoButton:(char)arg1 ;
@end

