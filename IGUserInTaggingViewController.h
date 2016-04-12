
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGUserInTaggingViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGUsertagTableViewDelegate.h>

@protocol IGUserInTaggingViewControllerDelegate;
@class UIBarButtonItem, UIView, UITextField, IGUserInTaggingView, UIImageView, IGLabel, IGUsertagTableView, IGUsertagGroup, NSMutableSet, NSString;

@interface IGUserInTaggingViewController : IGViewController <IGUserInTaggingViewDelegate, UITextFieldDelegate, IGUsertagTableViewDelegate> {

	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UIView* _searchView;
	UITextField* _searchField;
	UIView* _taggingContainerView;
	IGUserInTaggingView* _taggingView;
	UIImageView* _imageView;
	IGLabel* _taggingAddLabel;
	IGLabel* _taggingEditLabel;
	IGUsertagTableView* _tableView;
	IGUsertagGroup* _usertags;
	NSMutableSet* _untaggedFaces;
	id<IGUserInTaggingViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                              //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSMutableSet * untaggedFaces;                                           //@synthesize untaggedFaces=_untaggedFaces - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTaggingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)onCancelModal;
-(id)analyticsModule;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(id)initWithImageView:(id)arg1 ;
-(void)userInTaggingViewDidFinishTagging;
-(void)userInTaggingViewDidStartTaggingAtPosition:(CGPoint)arg1 ;
-(void)userInTaggingViewDidAddTag:(id)arg1 ;
-(void)userInTaggingViewDidMoveTag:(id)arg1 ;
-(void)userInTaggingViewDidRemoveTag:(id)arg1 ;
-(NSMutableSet *)untaggedFaces;
-(void)setUntaggedFaces:(NSMutableSet *)arg1 ;
-(void)onDoneTapped;
-(void)onLargeImageReady:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)updateQuery;
-(void)endQuery;
-(void)updateTaggingViewAndLabels;
-(void)tagTableViewDidSelectUser:(id)arg1 ;
-(void)setDelegate:(id<IGUserInTaggingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGUserInTaggingViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)startQuery;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
-(void)setImageView:(id)arg1 ;
@end

