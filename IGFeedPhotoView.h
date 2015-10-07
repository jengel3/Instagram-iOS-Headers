/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedPhotoViewDelegate, IGUserInTagDisplayDelegate;
@class IGUserInTagDisplayView, UITapGestureRecognizer, IGImageProgressView, IGUsertagGroup, NSURL, IGFeedItemPhotoCell, NSString;

@interface IGFeedPhotoView : IGFeedMediaView <IGImageProgressViewDelegate, UIGestureRecognizerDelegate> {

	IGUserInTagDisplayView* _inTagView;
	char _isShowingUsertagsIndicator;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	char _isShowingUsertags;
	char _enableDoubleTapRecognizer;
	IGImageProgressView* _photoImageView;
	IGUsertagGroup* _usertags;
	NSURL* _imageURL;
	id<IGFeedPhotoViewDelegate> _delegate;
	id<IGUserInTagDisplayDelegate> _tagViewDelegate;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                          //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) char isShowingUsertags;                                           //@synthesize isShowingUsertags=_isShowingUsertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedPhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> tagViewDelegate;              //@synthesize tagViewDelegate=_tagViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) IGFeedItemPhotoCell * parentCellView; 
@property (assign,nonatomic) char enableDoubleTapRecognizer;                                     //@synthesize enableDoubleTapRecognizer=_enableDoubleTapRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setEnableDoubleTapRecognizer:(char)arg1 ;
-(void)onDoubleTap:(id)arg1 ;
-(char)enableDoubleTapRecognizer;
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
-(void)dealloc;
-(void)setDelegate:(id<IGFeedPhotoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedPhotoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

