//
//  KDNControl.h
//  KDNControl
//
//  Created by Denis Koryttsev on 16/10/16.
//  Copyright © 2016 Denis Koryttsev. All rights reserved.
//

#import <UIKit/UIKit.h>

#define keyPath(class, key) ((class *)nil).key ? @#key : @#key

@interface KDNControl : UIControl

-(void)setValue:(id)value forKeyPath:(NSString *)key forState:(UIControlState)state; // in good case should use only in superclass, or inside subclass
-(void)registerState:(UIControlState)state forBoolKeyPath:(NSString*)keyPath inverted:(BOOL)inverted;

-(void)applyCurrentState;

@end