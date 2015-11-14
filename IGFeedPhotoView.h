/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedPhotoViewDelegate, IGUserInTagDisplayDelegate;
@class IGUserInTagDisplayView, IGImageProgressView, IGUsertagGroup, NSURL, UITapGestureRecognizer, IGFeedItemPhotoCell, NSString;

@interface IGFeedPhotoView : IGFeedMediaView <IGImageProgressViewDelegate, UIGestureRecognizerDelegate> {

	IGUserInTagDisplayView* _inTagView;
	char _isShowingUsertagsIndicator;
	char _isShowingUsertags;
	IGImageProgressView* _photoImageView;
	IGUsertagGroup* _usertags;
	NSURL* _imageURL;
	id<IGFeedPhotoViewDelegate> _delegate;
	id<IGUserInTagDisplayDelegate> _tagViewDelegate;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                          //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) char isShowingUsertags;                                           //@synthesize isShowingUsertags=_isShowingUsertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedPhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> tagViewDelegate;              //@synthesize tagViewDelegate=_tagViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) IGFeedItemPhotoCell * parentCellView; 
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                     //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                     //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)onDoubleTap:(id)arg1 ;
-(void)updateSingleTapRecognizer;
-(void)showUsertags:(char)arg1 animated:(char)arg2 ;
-(char)hasUsertags;
-(void)onUsertagGroupWasEdited;
-(void)toggleImageInfoDisplay;
-(void)showUsertagsIndicator:(char)arg1 animated:(char)arg2 ;
-(void)onTagIndicatorTapped;
-(CGRect)userTagIndicatorFrame;
-(char)isShowingUsertags;
-(id<IGUserInTagDisplayDelegate>)tagViewDelegate;
-(void)setTagViewDelegate:(id<IGUserInTagDisplayDelegate>)arg1 ;
-(id)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedPhotoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

