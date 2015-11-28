
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>

@protocol IGCommentContentViewDelegate;
@class IGLabel, UIImageView, UIActivityIndicatorView, IGCommentModel, UINavigationController, IGProfilePictureImageView, IGLocation, IGCoreTextView, NSString;

@interface IGCommentContentView : UIView <IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate> {

	IGLabel* _metadataLabel;
	UIImageView* _statusView;
	UIActivityIndicatorView* _activityIndicator;
	IGCommentModel* _comment;
	id<IGCommentContentViewDelegate> _delegate;
	UINavigationController* _navigationController;
	IGProfilePictureImageView* _profilePic;
	IGLocation* _location;
	IGCoreTextView* _coreTextView;
	IGLabel* _locationLabel;
	UIImageView* _placemarkImageView;

}

@property (nonatomic,retain) IGCommentModel * comment;                                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentContentViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                            //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGLocation * location;                                             //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) IGCoreTextView * coreTextView;                                     //@synthesize coreTextView=_coreTextView - In the implementation block
@property (nonatomic,retain) IGLabel * locationLabel;                                           //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UIImageView * placemarkImageView;                                  //@synthesize placemarkImageView=_placemarkImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)commentWidthForWidth:(float)arg1 ;
+(float)commentXOffset;
+(float)heightForComment:(id)arg1 location:(id)arg2 width:(float)arg3 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(UIImageView *)placemarkImageView;
-(void)prepareLocation;
-(void)onLocationTapped:(id)arg1 ;
-(void)updateContentLayout;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)buildCommentReplyWithUser:(id)arg1 ;
-(void)usernameTapped:(id)arg1 ;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setPlacemarkImageView:(UIImageView *)arg1 ;
-(void)setComment:(IGCommentModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCommentContentViewDelegate>)delegate;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(IGLabel *)locationLabel;
-(void)setLocationLabel:(IGLabel *)arg1 ;
-(void)updateStatus;
-(IGCommentModel *)comment;
@end

