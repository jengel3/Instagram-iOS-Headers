/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGImageURLProvider <NSObject,NSCoding>
@required
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2;
-(id)imageURLForWidth:(float)arg1;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2;

@end
