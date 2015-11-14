/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGCommentThreadTableSourceDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class IGFeedItem, IGPlainTableView, NSString, IGUserPreviewingHandler, IGButton, UIView, IGGrowingTextView, IGCommentModel, IGCommentThreadTableSource, IGAutocompleteController, IGBulkMediaRequestManager;

@interface IGCommentThreadViewController : IGViewController <IGCommentThreadTableSourceDelegate, IGAutocompleteControllerDelegate, IGGrowingTextViewDelegate, UITextFieldDelegate> {

	char _navBarWasHidden;
	char _skipDismissKeyboardAnimation;
	char _keyboardIsAnimating;
	char _keyboardShowing;
	char _displayKeyboardOnAppear;
	char _appearing;
	char _pushPerformed;
	char _shouldPanToBottom;
	IGFeedItem* _feedItem;
	IGPlainTableView* _tableView;
	NSString* _prefillText;
	IGUserPreviewingHandler* _userPreviewingDelegate;
	IGButton* _sendButton;
	UIView* _textViewContainer;
	UIView* _tableViewContainer;
	IGGrowingTextView* _growingTextView;
	IGCommentModel* _bottomCommentBeforeReload;
	IGCommentThreadTableSource* _dataSource;
	IGAutocompleteController* _autocompleteController;
	IGBulkMediaRequestManager* _requestManager;
	UIView* _keyboard;
	UIView* _keyboardAccessoryView;
	float _bottomCellOffsetBeforeReload;
	float _contentOffsetYBeforeReload;
	int _originalTextViewY;
	int _originalLocation;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                          //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char navBarWasHidden;                                           //@synthesize navBarWasHidden=_navBarWasHidden - In the implementation block
@property (assign,nonatomic) char skipDismissKeyboardAnimation;                              //@synthesize skipDismissKeyboardAnimation=_skipDismissKeyboardAnimation - In the implementation block
@property (nonatomic,readonly) NSString * prefillText;                                       //@synthesize prefillText=_prefillText - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userPreviewingDelegate;               //@synthesize userPreviewingDelegate=_userPreviewingDelegate - In the implementation block
@property (nonatomic,retain) IGButton * sendButton;                                          //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIView * textViewContainer;                                     //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) UIView * tableViewContainer;                                    //@synthesize tableViewContainer=_tableViewContainer - In the implementation block
@property (nonatomic,retain) IGGrowingTextView * growingTextView;                            //@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,retain) IGCommentModel * bottomCommentBeforeReload;                     //@synthesize bottomCommentBeforeReload=_bottomCommentBeforeReload - In the implementation block
@property (nonatomic,retain) IGCommentThreadTableSource * dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;              //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                     //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) UIView * keyboard;                                              //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) UIView * keyboardAccessoryView;                                 //@synthesize keyboardAccessoryView=_keyboardAccessoryView - In the implementation block
@property (assign,nonatomic) char keyboardIsAnimating;                                       //@synthesize keyboardIsAnimating=_keyboardIsAnimating - In the implementation block
@property (assign,nonatomic) char keyboardShowing;                                           //@synthesize keyboardShowing=_keyboardShowing - In the implementation block
@property (assign,nonatomic) char displayKeyboardOnAppear;                                   //@synthesize displayKeyboardOnAppear=_displayKeyboardOnAppear - In the implementation block
@property (assign,nonatomic) char appearing;                                                 //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) char pushPerformed;                                             //@synthesize pushPerformed=_pushPerformed - In the implementation block
@property (assign,nonatomic) char shouldPanToBottom;                                         //@synthesize shouldPanToBottom=_shouldPanToBottom - In the implementation block
@property (assign,nonatomic) float bottomCellOffsetBeforeReload;                             //@synthesize bottomCellOffsetBeforeReload=_bottomCellOffsetBeforeReload - In the implementation block
@property (assign,nonatomic) float contentOffsetYBeforeReload;                               //@synthesize contentOffsetYBeforeReload=_contentOffsetYBeforeReload - In the implementation block
@property (assign,nonatomic) int originalTextViewY;                                          //@synthesize originalTextViewY=_originalTextViewY - In the implementation block
@property (assign,nonatomic) int originalLocation;                                           //@synthesize originalLocation=_originalLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)initWithKeyboardShowing:(char)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)postComment;
-(void)commentThreadDataSource:(id)arg1 didAddNewCommentAtIndexPath:(id)arg2 ;
-(void)commentThreadDataSourceDidStartLoading:(id)arg1 isLoadingMore:(char)arg2 ;
-(void)commentThreadDataSourceDidFinishLoading:(id)arg1 ;
-(void)commentThreadDataSourceDidFailLoading:(id)arg1 ;
-(void)commentThreadDataSource:(id)arg1 didTapReplyToUser:(id)arg2 inCommentCell:(id)arg3 ;
-(void)commentThreadDataSourceTableWillDrag:(id)arg1 ;
-(void)commentThreadDataSourceTableDidDrag:(id)arg1 ;
-(void)commentThreadDataSourceTableWillEndDragging:(id)arg1 withVelocity:(float)arg2 ;
-(void)commentThreadDataSourceTableDidEndDragging:(id)arg1 ;
-(void)commentThreadDataSourceDeletedComment:(id)arg1 didReportAsSpam:(char)arg2 ;
-(void)commentThreadDataSourceDidFailToDeleteComment:(id)arg1 ;
-(void)commentThreadDataSourceWillDeleteComment:(id)arg1 ;
-(void)commentThreadDataSourceDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2 ;
-(void)commentThreadDataSourceDidStartBulkCommentDeletion:(id)arg1 ;
-(void)commentThreadDataSourceDidFailBulkCommentDeletion:(id)arg1 ;
-(char)keyboardShowing;
-(char)tableViewIsAtBottom;
-(void)setShouldPanToBottom:(char)arg1 ;
-(void)moveKeyboardWithGestureRecognizer:(id)arg1 ;
-(char)shouldPanToBottom;
-(void)finishKeyboardAnimationWithGestureRecognizer:(id)arg1 ;
-(id)initWithKeyboardShowing:(char)arg1 text:(id)arg2 ;
-(IGGrowingTextView *)growingTextView;
-(void)setTableViewContainer:(UIView *)arg1 ;
-(UIView *)tableViewContainer;
-(IGAutocompleteController *)autocompleteController;
-(NSString *)prefillText;
-(void)setTextViewContainer:(UIView *)arg1 ;
-(UIView *)textViewContainer;
-(void)setGrowingTextView:(IGGrowingTextView *)arg1 ;
-(void)setKeyboardAccessoryView:(UIView *)arg1 ;
-(UIView *)keyboardAccessoryView;
-(void)setupTableViews;
-(void)setupTextView;
-(void)setUserPreviewingDelegate:(IGUserPreviewingHandler *)arg1 ;
-(IGUserPreviewingHandler *)userPreviewingDelegate;
-(char)displayKeyboardOnAppear;
-(void)setDisplayKeyboardOnAppear:(char)arg1 ;
-(char)pushPerformed;
-(void)scrollToBottomAndAnimate:(char)arg1 ;
-(void)updateUserActivity;
-(void)setPushPerformed:(char)arg1 ;
-(void)animateKeyboardOffscreenWithDuration:(float)arg1 ;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(IGBulkMediaRequestManager *)requestManager;
-(void)setKeyboardShowing:(char)arg1 ;
-(char)keyboardIsAnimating;
-(float)textViewHeight;
-(char)skipDismissKeyboardAnimation;
-(void)setSkipDismissKeyboardAnimation:(char)arg1 ;
-(void)animateKeyboardReturnToOriginalPositionWithDuration:(float)arg1 ;
-(void)setKeyboardIsAnimating:(char)arg1 ;
-(void)saveScrollPosition;
-(void)updateScrollPositionUsingSavedScrollPosition;
-(void)appendUsernameToTextView:(id)arg1 ;
-(id)commentDeleteUndoMessageForNumberOfComments:(int)arg1 ;
-(void)setContentOffsetYBeforeReload:(float)arg1 ;
-(void)setBottomCellOffsetBeforeReload:(float)arg1 ;
-(void)setBottomCommentBeforeReload:(IGCommentModel *)arg1 ;
-(IGCommentModel *)bottomCommentBeforeReload;
-(float)bottomCellOffsetBeforeReload;
-(float)contentOffsetYBeforeReload;
-(char)growingTextViewShouldBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(char)enableNavState;
-(char)prefersTabBarHidden;
-(char)disableNavigationGesture;
-(char)navBarWasHidden;
-(void)setNavBarWasHidden:(char)arg1 ;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(int)originalTextViewY;
-(void)setOriginalTextViewY:(int)arg1 ;
-(int)originalLocation;
-(void)setOriginalLocation:(int)arg1 ;
-(void)setAppearing:(char)arg1 ;
-(void)setDataSource:(IGCommentThreadTableSource *)arg1 ;
-(void)dealloc;
-(IGCommentThreadTableSource *)dataSource;
-(void)viewWillLayoutSubviews;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)keyboardDidShow:(id)arg1 ;
-(UIView *)keyboard;
-(void)setKeyboard:(UIView *)arg1 ;
-(IGButton *)sendButton;
-(void)setSendButton:(IGButton *)arg1 ;
-(char)appearing;
-(void)setupSendButton;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

