
#import <UIKit/UIView.h>
#import <Instagram/IGUsertagViewDelegate.h>

@protocol IGUserInTagDisplayDelegate;
@class IGUsertagGroup, NSString;

@interface IGUserInTagDisplayView : UIView <IGUsertagViewDelegate> {

	IGUsertagGroup* _usertags;
	id<IGUserInTagDisplayDelegate> _delegate;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                   //@synthesize usertags=_usertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(char)tagViewCanBeSelected:(id)arg1 ;
-(void)tagViewWasSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(char)hasActiveUsertag;
-(void)showAllTagsAnimated:(char)arg1 ;
-(void)hideAllTagsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onUsertagsChanged;
-(void)setDelegate:(id<IGUserInTagDisplayDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGUserInTagDisplayDelegate>)delegate;
@end

