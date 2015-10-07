/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGUsertagViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGUserInTaggingViewDelegate;
@class NSMutableDictionary, UIScrollView, UIImageView, UIView, IGMediaOverlayIndicator, IGUsertagView, NSMutableSet, IGFaceCircleView, IGFaceCircleVignetteOverlayView, NSString;

@interface IGUserInTaggingView : UIView <UIScrollViewDelegate, IGUsertagViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableDictionary* _tagViews;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UIView* _tagViewContainer;
	IGMediaOverlayIndicator* _indicator;
	IGUsertagView* _pendingUsertagView;
	char _isAddingTag;
	char _allowTagging;
	char _isEdittingTag;
	id<IGUserInTaggingViewDelegate> _delegate;
	NSMutableSet* _untaggedFaces;
	NSMutableSet* _untaggedFaceCircleViews;
	NSMutableSet* _taggedFaceCircleViews;
	IGFaceCircleView* _selectedFaceCircleView;
	IGFaceCircleVignetteOverlayView* _vignetteOverlayView;

}

@property (nonatomic,readonly) char isAddingTag;                                                 //@synthesize isAddingTag=_isAddingTag - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTaggingViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowTagging;                                                  //@synthesize allowTagging=_allowTagging - In the implementation block
@property (nonatomic,retain) NSMutableSet * untaggedFaces;                                       //@synthesize untaggedFaces=_untaggedFaces - In the implementation block
@property (nonatomic,retain) NSMutableSet * untaggedFaceCircleViews;                             //@synthesize untaggedFaceCircleViews=_untaggedFaceCircleViews - In the implementation block
@property (nonatomic,retain) NSMutableSet * taggedFaceCircleViews;                               //@synthesize taggedFaceCircleViews=_taggedFaceCircleViews - In the implementation block
@property (nonatomic,retain) IGFaceCircleView * selectedFaceCircleView;                          //@synthesize selectedFaceCircleView=_selectedFaceCircleView - In the implementation block
@property (assign,nonatomic) char isEdittingTag;                                                 //@synthesize isEdittingTag=_isEdittingTag - In the implementation block
@property (nonatomic,retain) IGFaceCircleVignetteOverlayView * vignetteOverlayView;              //@synthesize vignetteOverlayView=_vignetteOverlayView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeUsertag:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(id)arg1 ;
-(void)tagViewWillMove:(id)arg1 ;
-(void)tagViewDidMove:(id)arg1 ;
-(void)tagViewDidEndMove:(id)arg1 ;
-(void)tagViewWasSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(void)hideAllTagsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)allowTagging;
-(void)startTaggingAtPosition:(CGPoint)arg1 ;
-(void)addTag:(id)arg1 andNotifyDelegate:(char)arg2 ;
-(void)fixOverlapsWithViews:(id)arg1 ;
-(void)dismissWithUser:(id)arg1 ;
-(void)addAllFaceCirclesWithAnimation:(id)arg1 ;
-(void)addFaceCircleView:(id)arg1 ;
-(void)setFrameForFaceCircleView:(id)arg1 ;
-(void)didTapFaceCircleView:(id)arg1 ;
-(void)editUserTagForFaceCircleView:(id)arg1 ;
-(void)selectFaceCircleView:(id)arg1 ;
-(void)startTaggingFaceAtPosition:(CGPoint)arg1 ;
-(void)setOverlayViewWithFaceboxView:(id)arg1 ;
-(void)setVignetteViewHidden:(char)arg1 animated:(char)arg2 ;
-(void)shrinkFaceCircleViews;
-(void)clearFaceCircleSelections;
-(void)presentAllUsertags;
-(void)presentFaceCircleViews;
-(void)_handleTapForFaceCircleView:(id)arg1 ;
-(char)selectNextFaceCircleIfExists;
-(void)tagSelectedCircle:(id)arg1 ;
-(void)removeUserTagView:(id)arg1 ;
-(char)isAddingTag;
-(void)setAllowTagging:(char)arg1 ;
-(NSMutableSet *)untaggedFaces;
-(void)setUntaggedFaces:(NSMutableSet *)arg1 ;
-(NSMutableSet *)untaggedFaceCircleViews;
-(void)setUntaggedFaceCircleViews:(NSMutableSet *)arg1 ;
-(NSMutableSet *)taggedFaceCircleViews;
-(void)setTaggedFaceCircleViews:(NSMutableSet *)arg1 ;
-(IGFaceCircleView *)selectedFaceCircleView;
-(void)setSelectedFaceCircleView:(IGFaceCircleView *)arg1 ;
-(char)isEdittingTag;
-(void)setIsEdittingTag:(char)arg1 ;
-(IGFaceCircleVignetteOverlayView *)vignetteOverlayView;
-(void)setVignetteOverlayView:(IGFaceCircleVignetteOverlayView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGUserInTaggingViewDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGUserInTaggingViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setImageView:(id)arg1 ;
@end

