/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface IGMarqueeCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic,__weak) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)marqueeLayout;
-(void)didTapMarqueeCollectionView:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

