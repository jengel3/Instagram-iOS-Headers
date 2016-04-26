/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <MapKit/MKPointAnnotation.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, UIColor, UIImage;

@interface RCTMapAnnotation : MKPointAnnotation <MKAnnotation> {

	char _hasLeftCallout;
	char _hasRightCallout;
	char _animateDrop;
	char _draggable;
	NSString* _identifier;
	UIColor* _tintColor;
	UIImage* _image;
	int _viewIndex;
	int _leftCalloutViewIndex;
	int _rightCalloutViewIndex;
	int _detailCalloutViewIndex;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasLeftCallout;                       //@synthesize hasLeftCallout=_hasLeftCallout - In the implementation block
@property (assign,nonatomic) char hasRightCallout;                      //@synthesize hasRightCallout=_hasRightCallout - In the implementation block
@property (assign,nonatomic) char animateDrop;                          //@synthesize animateDrop=_animateDrop - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int viewIndex;                             //@synthesize viewIndex=_viewIndex - In the implementation block
@property (assign,nonatomic) int leftCalloutViewIndex;                  //@synthesize leftCalloutViewIndex=_leftCalloutViewIndex - In the implementation block
@property (assign,nonatomic) int rightCalloutViewIndex;                 //@synthesize rightCalloutViewIndex=_rightCalloutViewIndex - In the implementation block
@property (assign,nonatomic) int detailCalloutViewIndex;                //@synthesize detailCalloutViewIndex=_detailCalloutViewIndex - In the implementation block
@property (assign,nonatomic) char draggable;                            //@synthesize draggable=_draggable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_RC32 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(char)hasLeftCallout;
-(void)setHasLeftCallout:(char)arg1 ;
-(char)hasRightCallout;
-(void)setHasRightCallout:(char)arg1 ;
-(char)animateDrop;
-(void)setAnimateDrop:(char)arg1 ;
-(int)viewIndex;
-(void)setViewIndex:(int)arg1 ;
-(int)leftCalloutViewIndex;
-(void)setLeftCalloutViewIndex:(int)arg1 ;
-(int)rightCalloutViewIndex;
-(void)setRightCalloutViewIndex:(int)arg1 ;
-(int)detailCalloutViewIndex;
-(void)setDetailCalloutViewIndex:(int)arg1 ;
-(void)setDraggable:(char)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)identifier;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)draggable;
@end
