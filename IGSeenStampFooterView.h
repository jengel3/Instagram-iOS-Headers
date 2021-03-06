
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGSeenStampFooterDelegate;
@class NSIndexPath, UIImageView, IGCoreTextView, NSArray, NSString;

@interface IGSeenStampFooterView : UICollectionReusableView <UIGestureRecognizerDelegate> {

	char _expanded;
	char _oneToOne;
	NSIndexPath* _indexPath;
	id<IGSeenStampFooterDelegate> _seenStampDelegate;
	UIImageView* _eyeIcon;
	IGCoreTextView* _usernameLabel;
	NSArray* _seenUsers;

}

@property (nonatomic,retain) UIImageView * eyeIcon;                                               //@synthesize eyeIcon=_eyeIcon - In the implementation block
@property (nonatomic,retain) IGCoreTextView * usernameLabel;                                      //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) NSArray * seenUsers;                                                 //@synthesize seenUsers=_seenUsers - In the implementation block
@property (assign,nonatomic) char oneToOne;                                                       //@synthesize oneToOne=_oneToOne - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                             //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) char expanded;                                                       //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGSeenStampFooterDelegate> seenStampDelegate;              //@synthesize seenStampDelegate=_seenStampDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seenStampStyle;
+(float)heightForUsers:(id)arg1 expanded:(char)arg2 ;
-(IGCoreTextView *)usernameLabel;
-(void)setUsernameLabel:(IGCoreTextView *)arg1 ;
-(void)didTapStamp:(id)arg1 ;
-(void)setSeenUsers:(id)arg1 isOneToOneChat:(char)arg2 ;
-(char)oneToOne;
-(id<IGSeenStampFooterDelegate>)seenStampDelegate;
-(void)setSeenStampDelegate:(id<IGSeenStampFooterDelegate>)arg1 ;
-(void)setEyeIcon:(UIImageView *)arg1 ;
-(void)setOneToOne:(char)arg1 ;
-(UIImageView *)eyeIcon;
-(NSArray *)seenUsers;
-(void)setSeenUsers:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSIndexPath *)indexPath;
-(void)prepareForReuse;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)updateLabel;
@end

